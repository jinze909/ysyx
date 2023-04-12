module Fulladder2(c0,a0,b0,a1,b1,s0,s1,cip1,cip2);
  input   c0,a0,b0,a1,b1; 
  output  s0,cip1,s1,cip2; 

  assign  s0=(a0^b0)^c0;
  assign  cip1=(a0&b0)|((a0^b0)&c0);
  assign  s1=(a1^b1)^cip1;
  assign  cip2=(a1&b1)|((a1^b1)&cip1);

endmodule
