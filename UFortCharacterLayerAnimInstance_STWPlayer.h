// Class /Script/FortniteGame.FortCharacterLayerAnimInstance_STWPlayer
// Size: 0x4d0
class UFortCharacterLayerAnimInstance_STWPlayer : public UFortBaseLayerAnimInstance
{
	struct FFortAnimInput_STWHoverBoard HoverBoardInput; // 0x440 (0x78)
	float LeanAdditiveAlpha; // 0x4b8 (0x4)
	float LeanAngle; // 0x4bc (0x4)
	float Speed2D; // 0x4c0 (0x4)
	float LocalVelocityYawAngle; // 0x4c4 (0x4)
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x4c8 (0x1)
	bool bIsSlopeSliding; // 0x4c9 (0x1)
	bool bIsOnGround; // 0x4ca (0x1)
	bool bLandingPredicted; // 0x4cb (0x1)
	bool bIsFalling; // 0x4cc (0x1)
	bool bIsJumping; // 0x4cd (0x1)
	unsigned char padding_4ce[0x2]; // 0x4ce (0x2)
};

