// Class /Script/ControlRig.ControlRigSequence
// Size: 0x278
class UControlRigSequence : public ULevelSequence
{
	struct TWeakObjectPtr<class UAnimSequence> LastExportedToAnimationSequence; // 0x220 (0x28)
	struct TWeakObjectPtr<class USkeletalMesh> LastExportedUsingSkeletalMesh; // 0x248 (0x28)
	float LastExportedFrameRate; // 0x270 (0x4)
	unsigned char padding_274[0x4]; // 0x274 (0x4)
};

