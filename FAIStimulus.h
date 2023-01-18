// ScriptStruct /Script/AIModule.AIStimulus
// Size: 0x50
struct FAIStimulus
{
	float Age; // 0x0 (0x4)
	float ExpirationAge; // 0x4 (0x4)
	float Strength; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector StimulusLocation; // 0x10 (0x18)
	struct FVector ReceiverLocation; // 0x28 (0x18)
	struct FName tag; // 0x40 (0x4)
	unsigned char unreflected_44[0x8]; // 0x44 (0x8) 
	unsigned char bSuccessfullySensed; // 0x4c (0x1)
	unsigned char padding_4d[0x3]; // 0x4d (0x3)
};

