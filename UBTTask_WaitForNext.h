// Class /Script/HmxAudio.BTTask_WaitForNext
// Size: 0xb0
class UBTTask_WaitForNext : public UBTTask_BlackboardBase
{
	enum EBTLengthType WaitForNext; // 0x98 (0x1)
	unsigned char padding_99[0x17]; // 0x99 (0x17)

	/* Functions */

	// Function /Script/HmxAudio.BTTask_WaitForNext.OnNextMeasure (Underlying native function: OnNextMeasure 0x544f810)
	void OnNextMeasure(int& measureNumber); // (Final | Native | Private)

	// Function /Script/HmxAudio.BTTask_WaitForNext.OnNextBeat (Underlying native function: OnNextBeat 0x544f4f0)
	void OnNextBeat(int& beatNumber, int& beatInBar); // (Final | Native | Private)
};

