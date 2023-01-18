// ScriptStruct /Script/FortniteGame.AshtonStoneData
// Size: 0xf0
struct FAshtonStoneData
{
	enum EAshtonStoneType StoneType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UFortWorldItemDefinition* StoneItemDefinition; // 0x8 (0x8)
	struct FSlateBrush StoneIconBrush; // 0x10 (0xc0)
	struct FVector2D MapIconScale; // 0xd0 (0x10)
	struct FGameplayTag GameplayTag; // 0xe0 (0x4)
	struct FGameplayTag PickupTag; // 0xe4 (0x4)
	enum EAshtonStoneStateType InitialStoneState; // 0xe8 (0x1)
	unsigned char padding_e9[0x7]; // 0xe9 (0x7)
};

