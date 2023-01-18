// Class /Script/FortniteGame.LevelSaveRecordThumbnailGenerator
// Size: 0xf8
class ULevelSaveRecordThumbnailGenerator : public UObject
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	struct TWeakObjectPtr<class UClass> StageActorClassPtr; // 0x40 (0x28)
	unsigned char unreflected_68[0x10]; // 0x68 (0x10) 
	class USceneCaptureComponent2D* SceneCaptureComponent; // 0x78 (0x8)
	class UCameraComponent* CameraComponent; // 0x80 (0x8)
	struct TScriptInterface<class IThumbnailSpawner> ActiveSpawner; // 0x88 (0x10)
	unsigned char unreflected_98[0x8]; // 0x98 (0x8) 
	struct TArray<class AActor*> SpawnedActors; // 0xa0 (0x10)
	unsigned char padding_b0[0x48]; // 0xb0 (0x48)
};

