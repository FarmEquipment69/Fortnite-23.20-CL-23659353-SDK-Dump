// ScriptStruct /Script/FortniteGame.FortCharacterPartsRepMontageInfo
// Size: 0x20
struct FFortCharacterPartsRepMontageInfo
{
	struct TArray<struct FFortCharacterPartMontageInfo> CharPartMontages; // 0x0 (0x10)
	class UAnimMontage* PawnMontage; // 0x10 (0x8)
	bool bPlayBit; // 0x18 (0x1)
	unsigned char padding_19[0x7]; // 0x19 (0x7)
};

