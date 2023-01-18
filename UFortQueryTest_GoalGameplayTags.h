// Class /Script/FortniteAI.FortQueryTest_GoalGameplayTags
// Size: 0x2c0
class UFortQueryTest_GoalGameplayTags : public UFortQueryTest_GoalBase
{
	bool bShouldLookupQueryByTag; // 0x268 (0x1)
	unsigned char unreflected_269[0x7]; // 0x269 (0x7) 
	struct FGameplayTagQuery TagQueryToMatch; // 0x270 (0x48)
	struct FGameplayTag QueryLookupTag; // 0x2b8 (0x4)
	bool bShouldPassWhenQueryNotFound; // 0x2bc (0x1)
	bool bRequireAllProvidedTagQueriesPass; // 0x2bd (0x1)
	unsigned char padding_2be[0x2]; // 0x2be (0x2)
};

