// ScriptStruct /Script/AIModule.AIDamageEvent
// Size: 0x50
struct FAIDamageEvent
{
	float Amount; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector Location; // 0x8 (0x18)
	struct FVector HitLocation; // 0x20 (0x18)
	class AActor* DamagedActor; // 0x38 (0x8)
	class AActor* Instigator; // 0x40 (0x8)
	struct FName tag; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

