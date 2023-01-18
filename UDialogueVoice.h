// Class /Script/Engine.DialogueVoice
// Size: 0x40
class UDialogueVoice : public UObject
{
	struct TEnumAsByte<EGrammaticalGender> Gender; // 0x28 (0x1)
	struct TEnumAsByte<EGrammaticalNumber> Plurality; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	struct FGuid LocalizationGUID; // 0x2c (0x10)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

