// ScriptStruct /Script/LevelSequence.LevelSequencePlayerSnapshot
// Size: 0xa8
struct FLevelSequencePlayerSnapshot
{
	struct FString MasterName; // 0x0 (0x10)
	struct FQualifiedFrameTime MasterTime; // 0x10 (0x10)
	struct FQualifiedFrameTime SourceTime; // 0x20 (0x10)
	struct FString CurrentShotName; // 0x30 (0x10)
	struct FQualifiedFrameTime CurrentShotLocalTime; // 0x40 (0x10)
	struct FQualifiedFrameTime CurrentShotSourceTime; // 0x50 (0x10)
	struct FString SourceTimecode; // 0x60 (0x10)
	struct TWeakObjectPtr<class UCameraComponent> CameraComponent; // 0x70 (0x28)
	class ULevelSequence* ActiveShot; // 0x98 (0x8)
	struct FMovieSceneSequenceID ShotID; // 0xa0 (0x4)
	unsigned char padding_a4[0x4]; // 0xa4 (0x4)
};

