
#ifndef _MCP3204_H
#define _MCP3204_H

class MCP3204 {
public:
  MCP3204();
  unsigned int read(unsigned int channel);
private:
  void cycle_clock();
};

#endif //_MCP3204_H
