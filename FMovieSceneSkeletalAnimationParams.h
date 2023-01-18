// ScriptStruct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0x148
struct FMovieSceneSkeletalAnimationParams
{
	class UAnimSequenceBase* Animation; // 0x0 (0x8)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x8 (0x4)
	struct FFrameNumber StartFrameOffset; // 0xc (0x4)
	struct FFrameNumber EndFrameOffset; // 0x10 (0x4)
	float PlayRate; // 0x14 (0x4)
	unsigned char bReverse; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	struct FName SlotName; // 0x1c (0x4)
	class UMirrorDataTable* MirrorDataTable; // 0x20 (0x8)
	struct FMovieSceneFloatChannel Weight; // 0x28 (0x110)
	bool bSkipAnimNotifiers; // 0x138 (0x1)
	bool bForceCustomMode; // 0x139 (0x1)
	enum ESwapRootBone SwapRootBone; // 0x13a (0x1)
	unsigned char unreflected_13b[0x1]; // 0x13b (0x1) 
	float StartOffset; // 0x13c (0x4)
	float EndOffset; // 0x140 (0x4)
	unsigned char padding_144[0x4]; // 0x144 (0x4)
};

