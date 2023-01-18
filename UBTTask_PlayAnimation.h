// Class /Script/AIModule.BTTask_PlayAnimation
// Size: 0xb0
class UBTTask_PlayAnimation : public UBTTaskNode
{
	class UAnimationAsset* AnimationToPlay; // 0x70 (0x8)
	unsigned char bLooping; // 0x78 (0x1)
	unsigned char bNonBlocking; // 0x78 (0x1)
	unsigned char unreflected_79[0x7]; // 0x79 (0x7) 
	class UBehaviorTreeComponent* MyOwnerComp; // 0x80 (0x8)
	class USkeletalMeshComponent* CachedSkelMesh; // 0x88 (0x8)
	unsigned char padding_90[0x20]; // 0x90 (0x20)
};

