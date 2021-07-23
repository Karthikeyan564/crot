# Mask-Generation
This project was designed for mask generation for Coded Exposure Cameras using TSMC65 Tape-out in September 2020 

## Random Pattern Generation
In order to generate 1920 pseudo-random bits per clock cycle, 62 32-bit LFSRs and 32 registers are used. While a for loop goes through 60 LFSRs (unpacked data types), the 32 registers are used to calculate feedback bits for the state of the current LFSR in the loop; the 32 bits would be the next state of the current LFSR after shifiting 32 times and it is saved in the next register and the output row appropriately, which avoids manipulating a single register multiple times in a clock cycle. The 2 remaining LFSRs, namely *LFSR_curr* and *LFSR_next*, are used to handle the last state inside the loop from one clock cycle to another. The code can be found under **_mask_generation_d.sv_**.
### Permutations
The feedback bits are not saved at the same order as they are computed but using permutations that can be found in **_permutations.xlsx_**. 
