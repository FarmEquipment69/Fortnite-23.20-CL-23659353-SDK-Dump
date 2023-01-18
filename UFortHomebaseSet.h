// Class /Script/FortniteGame.FortHomebaseSet
// Size: 0x590
class UFortHomebaseSet : public UFortAttributeSet
{
	struct FFortGameplayAttributeData KeepLevel; // 0x30 (0x28)
	struct FFortGameplayAttributeData KeepAmmoStashLevel; // 0x58 (0x28)
	struct FFortGameplayAttributeData KeepArmoryLevel; // 0x80 (0x28)
	struct FFortGameplayAttributeData KeepMedicalLevel; // 0xa8 (0x28)
	struct FFortGameplayAttributeData KeepStorageLevel; // 0xd0 (0x28)
	struct FFortGameplayAttributeData KeepWorkshopLevel; // 0xf8 (0x28)
	struct FFortGameplayAttributeData KeepStructureCap; // 0x120 (0x28)
	struct FFortGameplayAttributeData KeepPermaniteCap; // 0x148 (0x28)
	struct FFortGameplayAttributeData ManorLevel; // 0x170 (0x28)
	struct FFortGameplayAttributeData ManorStructureCap; // 0x198 (0x28)
	struct FFortGameplayAttributeData InventorySizeBonus; // 0x1c0 (0x28)
	struct FFortGameplayAttributeData WorldInventorySizeBonus; // 0x1e8 (0x28)
	struct FFortGameplayAttributeData StorageInventorySizeBonus; // 0x210 (0x28)
	struct FFortGameplayAttributeData ResearchPointMaxBonus; // 0x238 (0x28)
	struct FFortGameplayAttributeData MaxLevelBonusGlobal; // 0x260 (0x28)
	struct FFortGameplayAttributeData MaxLevelBonusSchematics; // 0x288 (0x28)
	struct FFortGameplayAttributeData MaxLevelBonusSchematicsRanged; // 0x2b0 (0x28)
	struct FFortGameplayAttributeData MaxLevelBonusSchematicsMelee; // 0x2d8 (0x28)
	struct FFortGameplayAttributeData MaxLevelBonusSchematicsTraps; // 0x300 (0x28)
	struct FFortGameplayAttributeData MaxLevelBonusPersonnel; // 0x328 (0x28)
	struct FFortGameplayAttributeData MaxLevelBonusAlterations; // 0x350 (0x28)
	struct FFortGameplayAttributeData ratepersecondcollectorTokencollectionresourcenodegatetoken01; // 0x378 (0x28)
	struct FFortGameplayAttributeData maxcapacitycollectorTokencollectionresourcenodegatetoken01; // 0x3a0 (0x28)
	struct FFortGameplayAttributeData SupplyDropMagnitude; // 0x3c8 (0x28)
	struct FFortGameplayAttributeData SupplyDropLevel; // 0x3f0 (0x28)
	struct FFortGameplayAttributeData ExpeditionSquadOnePower; // 0x418 (0x28)
	struct FFortGameplayAttributeData ExpeditionSquadTwoPower; // 0x440 (0x28)
	struct FFortGameplayAttributeData ExpeditionSquadThreePower; // 0x468 (0x28)
	struct FFortGameplayAttributeData ExpeditionSquadFourPower; // 0x490 (0x28)
	struct FFortGameplayAttributeData ExpeditionSquadFivePower; // 0x4b8 (0x28)
	struct FFortGameplayAttributeData ExpeditionSquadSixPower; // 0x4e0 (0x28)
	unsigned char padding_508[0x88]; // 0x508 (0x88)

	/* Functions */

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_WorldInventorySizeBonus (Underlying native function: OnRep_WorldInventorySizeBonus 0x23fc5c0)
	void OnRepWorldInventorySizeBonus(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_SupplyDrop_Magnitude (Underlying native function: OnRep_SupplyDrop_Magnitude 0x85a8740)
	void OnRepSupplyDropMagnitude(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_SupplyDrop_Level (Underlying native function: OnRep_SupplyDrop_Level 0x85a8674)
	void OnRepSupplyDropLevel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_StorageInventorySizeBonus (Underlying native function: OnRep_StorageInventorySizeBonus 0x85a84dc)
	void OnRepStorageInventorySizeBonus(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_ResearchPointMaxBonus (Underlying native function: OnRep_ResearchPointMaxBonus 0x85a7a80)
	void OnRepResearchPointMaxBonus(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_rate_per_second_collector_Token_collectionresource_nodegatetoken01 (Underlying native function: OnRep_rate_per_second_collector_Token_collectionresource_nodegatetoken01 0x85a9b2c)
	void OnRepratepersecondcollectorTokencollectionresourcenodegatetoken01(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_MaxLevelBonus_Schematics_Traps (Underlying native function: OnRep_MaxLevelBonus_Schematics_Traps 0x85a6f58)
	void OnRepMaxLevelBonusSchematicsTraps(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_MaxLevelBonus_Schematics_Ranged (Underlying native function: OnRep_MaxLevelBonus_Schematics_Ranged 0x85a6e8c)
	void OnRepMaxLevelBonusSchematicsRanged(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_MaxLevelBonus_Schematics_Melee (Underlying native function: OnRep_MaxLevelBonus_Schematics_Melee 0x85a6dc0)
	void OnRepMaxLevelBonusSchematicsMelee(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_MaxLevelBonus_Schematics (Underlying native function: OnRep_MaxLevelBonus_Schematics 0x85a6cf4)
	void OnRepMaxLevelBonusSchematics(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_MaxLevelBonus_Personnel (Underlying native function: OnRep_MaxLevelBonus_Personnel 0x85a6c28)
	void OnRepMaxLevelBonusPersonnel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_MaxLevelBonus_Global (Underlying native function: OnRep_MaxLevelBonus_Global 0x85a6b5c)
	void OnRepMaxLevelBonusGlobal(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_MaxLevelBonus_Alterations (Underlying native function: OnRep_MaxLevelBonus_Alterations 0x85a6a90)
	void OnRepMaxLevelBonusAlterations(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_max_capacity_collector_Token_collectionresource_nodegatetoken01 (Underlying native function: OnRep_max_capacity_collector_Token_collectionresource_nodegatetoken01 0x85a9a60)
	void OnRepmaxcapacitycollectorTokencollectionresourcenodegatetoken01(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_Manor_StructureCap (Underlying native function: OnRep_Manor_StructureCap 0x85a6760)
	void OnRepManorStructureCap(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_Manor_Level (Underlying native function: OnRep_Manor_Level 0x85a6694)
	void OnRepManorLevel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_Keep_Workshop_Level (Underlying native function: OnRep_Keep_Workshop_Level 0x85a6430)
	void OnRepKeepWorkshopLevel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_Keep_StructureCap (Underlying native function: OnRep_Keep_StructureCap 0x85a6364)
	void OnRepKeepStructureCap(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_Keep_Storage_Level (Underlying native function: OnRep_Keep_Storage_Level 0x85a6298)
	void OnRepKeepStorageLevel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_Keep_PermaniteCap (Underlying native function: OnRep_Keep_PermaniteCap 0x85a61cc)
	void OnRepKeepPermaniteCap(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_Keep_Medical_Level (Underlying native function: OnRep_Keep_Medical_Level 0x85a6100)
	void OnRepKeepMedicalLevel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_Keep_Level (Underlying native function: OnRep_Keep_Level 0x85a6034)
	void OnRepKeepLevel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_Keep_Armory_Level (Underlying native function: OnRep_Keep_Armory_Level 0x85a5f68)
	void OnRepKeepArmoryLevel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_Keep_AmmoStash_Level (Underlying native function: OnRep_Keep_AmmoStash_Level 0x85a5e9c)
	void OnRepKeepAmmoStashLevel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHomebaseSet.OnRep_InventorySizeBonus (Underlying native function: OnRep_InventorySizeBonus 0x85a5b6c)
	void OnRepInventorySizeBonus(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)
};

