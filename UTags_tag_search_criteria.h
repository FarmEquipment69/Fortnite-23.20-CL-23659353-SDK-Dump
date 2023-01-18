// VerseClass /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.Tags_tag_search_criteria
// Size: 0x60
class UTags_tag_search_criteria : public UObject
{
	struct TArray<class UTags_tag*> verse0x4B15ECECRequiredTags; // 0x28 (0x10)
	struct TArray<class UTags_tag*> verse0xDC4AEE52PreferredTags; // 0x38 (0x10)
	struct TArray<class UTags_tag*> verse0x321D6A7BExclusionTags; // 0x48 (0x10)
	enum Tags_tag_search_sort_type verse0xBFD91910SortType; // 0x58 (0x1)
	unsigned char padding_59[0x7]; // 0x59 (0x7)

	/* Functions */

	// Function /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.Tags_tag_search_criteria.$InitInstance (Has no native function)
	void $InitInstance(); // ()

	// Function /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.Tags_tag_search_criteria.$Block (Has no native function)
	void $Block(); // ()

	// Function /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.Tags_tag_search_criteria.$InitCDO (Has no native function)
	void $InitCDO(struct TArray<class UTags_tag*>& $ExprResult0, struct TArray<enum EVerseFalse>& verse0xFFC68BC5Array1, struct TArray<class UTags_tag*>& $ForResult1, int64_t& $ForIndex2, int64_t& $ForLength3, enum EVerseFalse& verse0xFB88B569Item3, unsigned char& $ExprResult4, struct TArray<class UTags_tag*>& $ExprResult5, struct TArray<enum EVerseFalse>& verse0xFFC68BC5Array5, struct TArray<class UTags_tag*>& $ForResult6, int64_t& $ForIndex7, int64_t& $ForLength8, enum EVerseFalse& verse0xFB88B569Item7, unsigned char& $ExprResult9, struct TArray<class UTags_tag*>& $ExprResult10, struct TArray<enum EVerseFalse>& verse0xFFC68BC5Array9, struct TArray<class UTags_tag*>& $ForResult11, int64_t& $ForIndex12, int64_t& $ForLength13, enum EVerseFalse& verse0xFB88B569Item11, unsigned char& $ExprResult14); // (HasDefaults)
};

