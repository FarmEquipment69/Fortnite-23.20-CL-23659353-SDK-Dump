// Class /Script/HmxAudio.BTDecorator_StopAtNext
// Size: 0xa8
class UBTDecorator_StopAtNext : public UBTDecorator_BlackboardBase
{
	enum EBTLengthType StopAtNext; // 0x90 (0x1)
	unsigned char padding_91[0x17]; // 0x91 (0x17)

	/* Functions */

	// Function /Script/HmxAudio.BTDecorator_StopAtNext.OnNextMeasure (Underlying native function: OnNextMeasure 0x544f770)
	void OnNextMeasure(int& measureNumber); // (Final | Native | Private)

	// Function /Script/HmxAudio.BTDecorator_StopAtNext.OnNextBeat (Underlying native function: OnNextBeat 0x544f400)
	void OnNextBeat(int& beatNumber, int& beatInBar); // (Final | Native | Private)
};

