// ScriptStruct /Script/FortniteGame.FortQuestMapCosmetic
// Size: 0x130
struct FFortQuestMapCosmetic
{
	enum ECosmeticType CosmeticType; // 0x0 (0x1)
	unsigned char unreflected_1[0xf]; // 0x1 (0xf) 
	struct FSlateBrush CosmeticBrush; // 0x10 (0xc0)
	class UClass* WidgetClass; // 0xd0 (0x8)
	struct TArray<class UFortItemDefinition*> CosmeticDataList; // 0xd8 (0x10)
	struct FVector2D CosmeticPosition; // 0xe8 (0x10)
	struct FWidgetTransform CosmeticTransform; // 0xf8 (0x38)
};

