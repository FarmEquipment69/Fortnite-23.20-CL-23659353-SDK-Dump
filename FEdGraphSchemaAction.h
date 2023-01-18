// ScriptStruct /Script/Engine.EdGraphSchemaAction
// Size: 0x100
struct FEdGraphSchemaAction
{
	struct FText MenuDescription; // 0x8 (0x18)
	struct FText TooltipDescription; // 0x20 (0x18)
	struct FText category; // 0x38 (0x18)
	struct FText Keywords; // 0x50 (0x18)
	int Grouping; // 0x68 (0x4)
	int SectionId; // 0x6c (0x4)
	struct TArray<struct FString> MenuDescriptionArray; // 0x70 (0x10)
	struct TArray<struct FString> FullSearchTitlesArray; // 0x80 (0x10)
	struct TArray<struct FString> FullSearchKeywordsArray; // 0x90 (0x10)
	struct TArray<struct FString> FullSearchCategoryArray; // 0xa0 (0x10)
	struct TArray<struct FString> LocalizedMenuDescriptionArray; // 0xb0 (0x10)
	struct TArray<struct FString> LocalizedFullSearchTitlesArray; // 0xc0 (0x10)
	struct TArray<struct FString> LocalizedFullSearchKeywordsArray; // 0xd0 (0x10)
	struct TArray<struct FString> LocalizedFullSearchCategoryArray; // 0xe0 (0x10)
	struct FString SearchText; // 0xf0 (0x10)
};

