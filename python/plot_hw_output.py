import numpy as np
from PIL import Image
from utils import read_results
from utils import convert_hexstring_to_bin_list

def main():    
    hw_results, hw_results_count = read_results("../testcase_raws/testcases_hw_output.txt")
    
    for index in range(0, hw_results_count):
        hw_output_len = len(hw_results[index]["output"])
        
        bin_list_2d = []
        for each_hexstring in hw_results[index]["output"]:
            temp_bin_list = []
            convert_hexstring_to_bin_list(each_hexstring, temp_bin_list)
            temp_bin_list = [0 if x == 0 else 255 for x in temp_bin_list]
            bin_list_2d.append(temp_bin_list)
            
        if hw_results[index]["testcase"].split(" ")[0] == "11": # Temporarily here since MGA's repeated pattern is only set to outputs one row
            for _ in range(0, 479):
                bin_list_2d.append(bin_list_2d[0])
        
        filename = str(index) + "__" + hw_results[index]["testcase"].replace(" ", "_") + ".png"
        array = np.asarray(bin_list_2d, dtype=np.uint8)
        
        img = Image.fromarray(array)
        img.save("../testcase_raws/"+filename)
    
if __name__ == "__main__":
    main()
    
    
    
    
    
    
    
    
    
    



