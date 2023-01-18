// Class /Script/AIModule.BTService
// Size: 0x70
class UBTService : public UBTAuxiliaryNode
{
	float Interval; // 0x60 (0x4)
	float RandomDeviation; // 0x64 (0x4)
	unsigned char bCallTickOnSearchStart; // 0x68 (0x1)
	unsigned char bRestartTimerOnEachActivation; // 0x68 (0x1)
	unsigned char padding_69[0x7]; // 0x69 (0x7)
};

