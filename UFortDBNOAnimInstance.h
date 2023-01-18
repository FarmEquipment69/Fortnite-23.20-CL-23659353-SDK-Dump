// Class /Script/FortniteGame.FortDBNOAnimInstance
// Size: 0x460
class UFortDBNOAnimInstance : public UFortBaseLayerAnimInstance
{
	enum EFortPlayerAnimBodyType AnimBodyType; // 0x440 (0x1)
	unsigned char unreflected_441[0x3]; // 0x441 (0x3) 
	float LeanAngle; // 0x444 (0x4)
	float SpeedAdjustedPlayrate; // 0x448 (0x4)
	float LeanAdditiveAlpha; // 0x44c (0x4)
	float Speed2D; // 0x450 (0x4)
	float LocalVelocityYawAngle; // 0x454 (0x4)
	float DBNOTurnPlayRate; // 0x458 (0x4)
	unsigned char bIsOnGround; // 0x45c (0x1)
	unsigned char bTransitionFullBodyDBNOMove; // 0x45c (0x1)
	unsigned char bTransitionFullBodyDBNOTurn; // 0x45c (0x1)
	unsigned char padding_45d[0x3]; // 0x45d (0x3)
};

