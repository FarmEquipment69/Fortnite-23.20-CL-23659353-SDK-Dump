// Class /Script/FortniteGame.FortItemEntrySubsystem
// Size: 0x120
class UFortItemEntrySubsystem : public UGameInstanceSubsystem
{
	struct TMap<struct FGuid, struct FFortItemEntryAbilityData> ItemAbilityCooldownMap; // 0x30 (0x50)
	struct TMap<struct FGuid, struct FFortItemEntryTaggedIntegerData> ItemTaggedIntegerMap; // 0x80 (0x50)
	struct TMap<struct FGuid, struct FFortItemEntryTaggedFloatData> ItemTaggedFloatMap; // 0xd0 (0x50)
};

