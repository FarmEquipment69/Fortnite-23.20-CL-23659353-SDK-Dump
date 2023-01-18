// ScriptStruct /Script/Engine.BlendSampleData
// Size: 0x60
struct FBlendSampleData
{
	int SampleDataIndex; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UAnimSequence* Animation; // 0x8 (0x8)
	float TotalWeight; // 0x10 (0x4)
	float WeightRate; // 0x14 (0x4)
	float Time; // 0x18 (0x4)
	float PreviousTime; // 0x1c (0x4)
	float SamplePlayRate; // 0x20 (0x4)
	unsigned char padding_24[0x3c]; // 0x24 (0x3c)
};

