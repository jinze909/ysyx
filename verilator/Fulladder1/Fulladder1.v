module Fulladder1(c,a,b,s,cip1);
  input   c,a,b; 
  output  s,cip1; 

  assign  s=(a^b)^c;
  assign  cip1=(a&b)|((a^b)&c);

endmodule
