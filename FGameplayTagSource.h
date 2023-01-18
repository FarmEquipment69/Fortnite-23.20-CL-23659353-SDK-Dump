// ScriptStruct /Script/GameplayTags.GameplayTagSource
// Size: 0x18
struct FGameplayTagSource
{
	struct FName SourceName; // 0x0 (0x4)
	enum EGameplayTagSourceType SourceType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	class UGameplayTagsList* SourceTagList; // 0x8 (0x8)
	class URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x10 (0x8)
};

