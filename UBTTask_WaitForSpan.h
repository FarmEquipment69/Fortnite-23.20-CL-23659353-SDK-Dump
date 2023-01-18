// Class /Script/HmxAudio.BTTask_WaitForSpan
// Size: 0xf8
class UBTTask_WaitForSpan : public UBTTask_BlackboardBase
{
	float Length; // 0x98 (0x4)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	struct FBlackboardKeySelector LengthKey; // 0xa0 (0x28)
	bool UseLengthFromBlackboard; // 0xc8 (0x1)
	enum ELengthType LengthUnits; // 0xc9 (0x1)
	enum ESynchronizationType SynchronizeTo; // 0xca (0x1)
	unsigned char unreflected_cb[0x1]; // 0xcb (0x1) 
	int SlopWindow; // 0xcc (0x4)
	unsigned char padding_d0[0x28]; // 0xd0 (0x28)

	/* Functions */

	// Function /Script/HmxAudio.BTTask_WaitForSpan.OnNextMeasure (Underlying native function: OnNextMeasure 0x544f8b0)
	void OnNextMeasure(int& measureNumber); // (Final | Native | Private)

	// Function /Script/HmxAudio.BTTask_WaitForSpan.OnNextBeat (Underlying native function: OnNextBeat 0x544f5e0)
	void OnNextBeat(int& beatNumber, int& beatInBar); // (Final | Native | Private)
};

