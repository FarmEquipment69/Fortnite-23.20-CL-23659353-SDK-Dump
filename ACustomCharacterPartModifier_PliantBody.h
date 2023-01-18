// Class /Script/FortniteGame.CustomCharacterPartModifier_PliantBody
// Size: 0x4f0
class ACustomCharacterPartModifier_PliantBody : public ACustomCharacterPartModifier
{
	struct FName UpperSocket; // 0x480 (0x4)
	struct FName LowerSocket; // 0x484 (0x4)
	struct FName LeftSocket; // 0x488 (0x4)
	struct FName RightSocket; // 0x48c (0x4)
	struct FName BackSocket; // 0x490 (0x4)
	struct FName ForwardSocket; // 0x494 (0x4)
	struct FName CenterReferenceSocket; // 0x498 (0x4)
	struct FName RootReferenceSocket; // 0x49c (0x4)
	int TypeDataIndex; // 0x4a0 (0x4)
	float TypeValue; // 0x4a4 (0x4)
	int MinDataIndex; // 0x4a8 (0x4)
	int MaxDataIndex; // 0x4ac (0x4)
	int ReferencePointDataIndex; // 0x4b0 (0x4)
	unsigned char unreflected_4b4[0x4]; // 0x4b4 (0x4) 
	class UCurveFloat* CrouchCurve; // 0x4b8 (0x8)
	struct FVector2D InputRange; // 0x4c0 (0x10)
	struct FVector2D CrouchedOutputRange; // 0x4d0 (0x10)
	struct FVector2D UncrouchedOutputRange; // 0x4e0 (0x10)
};

