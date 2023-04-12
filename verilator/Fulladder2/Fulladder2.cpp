#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/VFulladder2.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VFulladder2* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new VFulladder2;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();

  top->c0=0; top->a0=0; top->b0=0; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                        top->b0=1; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
             top->a0=1; top->b0=0; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                        top->b0=1; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
             top->a1=0; top->b1=0; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                        top->b1=1; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
             top->a1=1; top->b1=0; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                        top->b1=1; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
  top->c0=1; top->a0=0; top->b0=0; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                        top->b0=1; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
             top->a0=1; top->b0=0; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                        top->b0=1; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
             top->a1=0; top->b1=0; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                        top->b1=1; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
             top->a1=1; top->b1=0; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                        top->b1=1; top->a1=0; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();
                                   top->a1=1; top->b1=0; step_and_dump_wave();
                                              top->b1=1; step_and_dump_wave();

  sim_exit();
}
