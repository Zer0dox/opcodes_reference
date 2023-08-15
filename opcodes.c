#include <stdio.h>

typedef struct {
    const char *instruction;
    const char *opcode;
} InstructionOpcode;

int main() {
    InstructionOpcode instructions[50] = {
        {"MOV", "88/89/8A/8B"},
        {"ADD", "00/01/02/03"},
        {"SUB", "28/29/2A/2B"},
        {"MUL", "F6/F7"},
        {"DIV", "F6/F7"},
        {"AND", "20/21/22/23"},
        {"OR", "08/09/0A/0B"},
        {"XOR", "30/31/32/33"},
        {"NOT", "F6/F7"},
        {"SHL", "D0/D1/D2/D3"},
        {"SHR", "D0/D1/D2/D3"},
        {"LEA", "8D"},
        {"CALL", "E8/FF"},
        {"RET", "C3/C2"},
        {"PUSH", "50/51/52/53/54/55/56/57"},
        {"POP", "58/59/5A/5B/5C/5D/5E/5F"},
        {"CMP", "38/39/3A/3B"},
        {"JMP", "EB/E9/FF"},
        {"JE", "74"},
        {"JNE", "75"},
        {"JG", "7F"},
        {"JL", "7C"},
        {"JGE", "7D"},
        {"JLE", "7E"},
        {"TEST", "84/85"},
        {"NOP", "90"},
        {"INC", "FF"},
        {"DEC", "FF"},
        {"NEG", "F6/F7"},
        {"ADC", "10/11/12/13"},
        {"SBB", "18/19/1A/1B"},
        {"IMUL", "F6/F7/69/6B"},
        {"IDIV", "F6/F7"},
        {"ROL", "D0/D1/D2/D3"},
        {"ROR", "D0/D1/D2/D3"},
        {"RCL", "D0/D1/D2/D3"},
        {"RCR", "D0/D1/D2/D3"},
        {"SAR", "D0/D1/D2/D3"},
        {"SAL", "D0/D1/D2/D3"},
        {"BSF", "0FBC"},
        {"BSR", "0FBD"},
        {"SETZ", "0F94"},
        {"SETNZ", "0F95"},
        {"SETG", "0F9F"},
        {"SETL", "0F9C"},
        {"SETGE", "0F9D"},
        {"SETLE", "0F9E"},
        {"CMOVZ", "0F44"},
        {"CMOVNZ", "0F45"},
        {"CMOVG", "0F4F"},
        {"CMOVL", "0F4C"},
        {"CMOVGE", "0F4D"},
        {"CMOVLE", "0F4E"}
    };

    for (int i = 0; i < 50; i++) {
        printf("Instruction: %s, Opcode: %s\n", instructions[i].instruction, instructions[i].opcode);
    }

    return 0;
}
