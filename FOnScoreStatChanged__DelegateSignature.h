// DelegateFunction /Script/FortniteUI.OnScoreStatChanged__DelegateSignature
// Size: 0x28
struct FOnScoreStatChanged__DelegateSignature
{
	int StatDelta; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText StatName; // 0x8 (0x18)
	struct TEnumAsByte<EFortReplicatedStat> StatType; // 0x20 (0x1)
	enum EStatCategory StatCategory; // 0x21 (0x1)
	unsigned char padding_22[0x6]; // 0x22 (0x6)
};

