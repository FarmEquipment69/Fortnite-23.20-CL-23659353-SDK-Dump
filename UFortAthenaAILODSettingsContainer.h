// Class /Script/FortniteAI.FortAthenaAILODSettingsContainer
// Size: 0xc8
class UFortAthenaAILODSettingsContainer : public UObject
{
	unsigned char ClassToSettings_28[0x50]; // 0x28 (0x50) (UNHANDLED PROPERTY TYPE: MapProperty UID: 0)
	struct TArray<class UClass*> LODSettingsAIEvaluators; // 0x78 (0x10)
	struct TArray<class UClass*> LODSettingsCharacterMovement; // 0x88 (0x10)
	struct TArray<class UClass*> LODSettingsFortWeaponRanged; // 0x98 (0x10)
	struct TArray<class UClass*> LODSettingsGenericTickingObject; // 0xa8 (0x10)
	class UClass* FortAIDirectorLODConfig; // 0xb8 (0x8)
	class UFortAIDirectorLODAIConfig* FortAIDirectorObjectLODConfig; // 0xc0 (0x8)
};

