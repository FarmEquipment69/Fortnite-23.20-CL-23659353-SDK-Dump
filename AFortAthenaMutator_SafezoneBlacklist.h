// Class /Script/FortniteGame.FortAthenaMutator_SafezoneBlacklist
// Size: 0x398
class AFortAthenaMutator_SafezoneBlacklist : public AFortAthenaMutator
{
	struct FScalableFloat MasterDisableSwitch; // 0x330 (0x28)
	struct TArray<class UBlacklistEntryBase*> BlacklistEntries; // 0x358 (0x10)
	struct TArray<struct FGameplayTag> HotfixBlacklistPoiTags; // 0x368 (0x10)
	struct TArray<struct FHotfixableBlacklistLiteralLocations> HotfixBlacklistLocations; // 0x378 (0x10)
	struct TArray<class UBlacklistEntryBase*> HotfixedEntries; // 0x388 (0x10)
};

