// ScriptStruct /Script/PoseSearch.PoseSearchDatabaseSetEntry
// Size: 0x10
struct FPoseSearchDatabaseSetEntry
{
	class UPoseSearchSearchableAsset* Searchable; // 0x0 (0x8)
	struct FGameplayTag tag; // 0x8 (0x4)
	enum EPoseSearchPostSearchStatus PostSearchStatus; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

