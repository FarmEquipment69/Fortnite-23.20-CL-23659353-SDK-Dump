// ScriptStruct /Script/FortniteGame.FortEmoteMapping
// Size: 0x30
struct FFortEmoteMapping
{
	struct TEnumAsByte<EFortCustomBodyType> BodyType; // 0x0 (0x1)
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct TWeakObjectPtr<class UAnimMontage> EmoteMontage; // 0x8 (0x28)
};

