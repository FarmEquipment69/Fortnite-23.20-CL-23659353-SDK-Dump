// Class /Script/HmxAudio.BTDecorator_StopAfterSpan
// Size: 0xc8
class UBTDecorator_StopAfterSpan : public UBTDecorator_BlackboardBase
{
	float Length; // 0x90 (0x4)
	enum ELengthType LengthUnits; // 0x94 (0x1)
	enum ESynchronizationType SynchronizeTo; // 0x95 (0x1)
	unsigned char unreflected_96[0x2]; // 0x96 (0x2) 
	int SlopWindow; // 0x98 (0x4)
	unsigned char padding_9c[0x2c]; // 0x9c (0x2c)

	/* Functions */

	// Function /Script/HmxAudio.BTDecorator_StopAfterSpan.OnNextMeasure (Underlying native function: OnNextMeasure 0x544f6d0)
	void OnNextMeasure(int& measureNumber); // (Final | Native | Private)

	// Function /Script/HmxAudio.BTDecorator_StopAfterSpan.OnNextBeat (Underlying native function: OnNextBeat 0x544f310)
	void OnNextBeat(int& beatNumber, int& beatInBar); // (Final | Native | Private)
};

