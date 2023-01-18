// Class /Script/AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0xc8
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
	struct FBlackboardKeySelector ActorToCheck; // 0x68 (0x28)
	enum EGameplayContainerMatchType TagsToMatch; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	struct FGameplayTagContainer GameplayTags; // 0x98 (0x20)
	struct FString CachedDescription; // 0xb8 (0x10)
};

