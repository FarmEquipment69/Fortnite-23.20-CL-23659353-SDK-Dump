// Class /Script/FortniteGame.FortQuestIndicatorData
// Size: 0xf8
class UFortQuestIndicatorData : public UDataAsset
{
	class UDataTable* QuestTagToLocationDataTable; // 0x30 (0x8)
	struct TWeakObjectPtr<class UTexture2D> DefaultQuestIcon; // 0x38 (0x28)
	class UDataTable* QuestTagToIconDataTable; // 0x60 (0x8)
	struct TMap<enum EFortQuestObjectiveStatEvent, struct TWeakObjectPtr<class UTexture2D>> QuestOjectiveTypeToIconMap; // 0x68 (0x50)
	class UDataTable* QuestTagToCategoryDataTable; // 0xb8 (0x8)
	struct FName CaptureCameraName; // 0xc0 (0x4)
	unsigned char unreflected_c4[0x4]; // 0xc4 (0x4) 
	struct FCaptureCameraFrontendData CaptureCameraData; // 0xc8 (0x20)
	struct TArray<struct FFortChallengeMapPoiData> ChallengeMapPoiData; // 0xe8 (0x10)
};

