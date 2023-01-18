// ScriptStruct /Script/FortniteGame.LoadoutVariantDef
// Size: 0x1c0
struct FLoadoutVariantDef : FPartVariantDef
{
	struct TWeakObjectPtr<class UAthenaCosmeticItemDefinition> LoadoutItem; // 0x180 (0x28)
	enum ELoadoutVariantInsertType LocationToInsert; // 0x1a8 (0x1)
	bool bItemExpectedInLoadout; // 0x1a9 (0x1)
	bool bRequireItemToBeCurrent; // 0x1aa (0x1)
	bool bIgnoreRequireItemToBeCurrentInFrontEnd; // 0x1ab (0x1)
	unsigned char unreflected_1ac[0x4]; // 0x1ac (0x4) 
	struct TArray<struct FEmoteMontageVariantDef> VariantEmoteMontages; // 0x1b0 (0x10)
};

