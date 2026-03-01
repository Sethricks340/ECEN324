// 0x401098 <phase_5>      push   %rbx
// 0x401099 <phase_5+1>    sub    $0x10,%rsp
// 0x40109d <phase_5+5>    mov    %rdi,%rbx                // rbx = input string
// 0x4010a0 <phase_5+8>    callq  0x4012fb <string_length>                                                                                                  
// 0x4010a5 <phase_5+13>   cmp    $0x6,%eax                                                                                                                 
// 0x4010a8 <phase_5+16>   jne    0x4010e9 <phase_5+81>  

// 0x4010aa <phase_5+18>   mov    $0x0,%eax       

        // rbx = input string
        // the following is a loop that does *something* to the input string: (rbx)
// 0x4010af <phase_5+23>   movzbl (%rbx,%rax,1),%edx                                                                                                        
// 0x4010b3 <phase_5+27>   and    $0xf,%edx                                                                                                                 
// 0x4010b6 <phase_5+30>   movzbl 0x4024f0(%rdx),%edx                                                                                                       
// 0x4010bd <phase_5+37>   mov    %dl,0x9(%rsp,%rax,1)                                                                                                      
// 0x4010c1 <phase_5+41>   add    $0x1,%rax                                                                                                                 
// 0x4010c5 <phase_5+45>   cmp    $0x6,%rax                                                                                                                 
// 0x4010c9 <phase_5+49>   jne    0x4010af <phase_5+23>  


// sethiz -> ueinfo      i -> f    l?    a?    m?    e->e   s?
// abcdef  -> aduier     a -> a
// ghijkl  -> snfotv     g -> s    
// mnopqr  -> bylmad     0 -> l   p-> m

// ioapeg  -> flames

// 0x4010cb <phase_5+51>   movb   $0x0,0xf(%rsp)                                                                                                            
// 0x4010d0 <phase_5+56>   mov    $0x4024a6,%esi           // "flames"                                                                                                  
// 0x4010d5 <phase_5+61>   lea    0x9(%rsp),%rdi                                                                                                            
// 0x4010da <phase_5+66>   callq  0x401318 <strings_not_equal>                                                                                              
// 0x4010df <phase_5+71>   test   %eax,%eax                                                                                                                 
// 0x4010e1 <phase_5+73>   jne    0x4010f0 <phase_5+88>    
// 0x4010e3 <phase_5+75>   add    $0x10,%rsp                                                                                                                
// 0x4010e7 <phase_5+79>   pop    %rbx                                                                                                                      
// 0x4010e8 <phase_5+80>   retq                                                                                                                             
// 0x4010e9 <phase_5+81>   callq  0x40153f <explode_bomb>                                                                                                   
// 0x4010ee <phase_5+86>   jmp    0x4010aa <phase_5+18>                                                                                                     
// 0x4010f0 <phase_5+88>   callq  0x40153f <explode_bomb>                                                                                                   
// 0x4010f5 <phase_5+93>   jmp    0x4010e3 <phase_5+75> 






// #include <stdio.h>

// int dress = 14; // rdx
// int silk = 0;   // rsi
// int diane = 4;  // First number input //rdi

// int func4(int dress, int silk, int diane){
// }

int main() {
   
}