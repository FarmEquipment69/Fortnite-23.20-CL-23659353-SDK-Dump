// Class /Script/ControlRig.MovieSceneControlRigParameterSection
// Size: 0x3c8
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
	unsigned char unreflected_158[0x40]; // 0x158 (0x40) 
	class UControlRig* ControlRig; // 0x198 (0x8)
	class UClass* ControlRigClass; // 0x1a0 (0x8)
	struct TArray<bool> ControlsMask; // 0x1a8 (0x10)
	struct FMovieSceneTransformMask TransformMask; // 0x1b8 (0x4)
	unsigned char unreflected_1bc[0x4]; // 0x1bc (0x4) 
	struct FMovieSceneFloatChannel Weight; // 0x1c0 (0x110)
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap; // 0x2d0 (0x50)
	struct TArray<struct FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; // 0x320 (0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; // 0x330 (0x10)
	struct TArray<struct FSpaceControlNameAndChannel> SpaceChannels; // 0x340 (0x10)
	struct TArray<struct FConstraintAndActiveChannel> ConstraintsChannels; // 0x350 (0x10)
	unsigned char padding_360[0x68]; // 0x360 (0x68)
};

