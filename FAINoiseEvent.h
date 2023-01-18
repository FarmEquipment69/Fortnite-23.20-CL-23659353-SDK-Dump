// ScriptStruct /Script/AIModule.AINoiseEvent
// Size: 0x38
struct FAINoiseEvent
{
	struct FVector NoiseLocation; // 0x8 (0x18)
	float Loudness; // 0x20 (0x4)
	float MaxRange; // 0x24 (0x4)
	class AActor* Instigator; // 0x28 (0x8)
	struct FName tag; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

