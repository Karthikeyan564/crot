# Github Actions - CI
## Developer Status
- The CI has been implemented and verified.- (Note: Setup keys if caching is needed)
- The CI currently is setup up for only the [mask_generation_VGA.sv](https://github.com/Karthikeyan564/Mask-Generation/blob/main/rtl/mask_generation_VGA.sv "mask_generation_VGA.sv") not the [MGTop.sv](https://github.com/Karthikeyan564/Mask-Generation/blob/main/rtl/MGTop.sv "MGTop.sv").
## Introduction
The CI enables to easily verify if the new pushes to the github breaks anything that was working before by running a couple of testbenches.
If you see a green tick near the commit hash on the repo's main page. That means last commit ran all the testcases successfully.
If you see a red cross near the commit hash. Some of the testcases are failing. Click on the red cross navigate to the which testbench is failing and view the error(Exception message and log message) to see what's broken.
## Adding a testbench to the CI.
In the **CI folder**: 
- Put your python(raise exceptions whenever testcase fails- be clear on what the error is so that when in future the test fails you get easy debugging output) scripts in the python folder. 
- Verilog testbenches in the tb folder
- Write a script(do not call python from verilog- exit code gets masked- call it in script) to run the tests.
-  Make sure all the file are referenced properly( especially if you are using relative addessing ./ or .\./

Edit the .github/workflows/mask_gen.yaml and add the following at the end
```	
	- name: <name of the Testbench>
	run: cd $GITHUB_WORKSPACE/CI/scripts/ && chmod +x <test script> && ./<test script>
```
