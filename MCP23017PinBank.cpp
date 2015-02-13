#include "MCP23017PinBank.h"
#include <Arduino.h>

MCP23017PinBank::MCP23017PinBank(Adafruit_MCP23017 mcp) : mcp(mcp) {
}

const int MCP23017PinBank::digitalRead(uint8_t pin) {
	return mcp.digitalRead(pin);
}

const void MCP23017PinBank::digitalWrite(uint8_t pin, uint8_t value) {
	mcp.digitalWrite(pin, value);
}
