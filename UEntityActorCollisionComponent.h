// Class /Script/EntityActor.EntityActorCollisionComponent
// Size: 0x100
class UEntityActorCollisionComponent : public UEntityEnableableComponent
{
	unsigned char unreflected_80[0x48]; // 0x80 (0x48) 
	struct FName ShadowVarCollisionProfileName; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	struct TWeakObjectPtr<class UPrimitiveComponent> PrimitiveComponentCache; // 0xd0 (0x28)
	unsigned char unreflected_f8[0x2]; // 0xf8 (0x2) 
	struct TEnumAsByte<ECollisionShapeMode> CollisionShapeMode; // 0xfa (0x1)
	unsigned char padding_fb[0x5]; // 0xfb (0x5)

	/* Functions */

	// Function /Script/EntityActor.EntityActorCollisionComponent.OnRep_PrimitiveComponent (Underlying native function: OnRep_PrimitiveComponent 0x6a5b460)
	void OnRepPrimitiveComponent(); // (Final | Native | Private)

	// Function /Script/EntityActor.EntityActorCollisionComponent.OnRep_CollisionProfileName (Underlying native function: OnRep_CollisionProfileName 0x6a5b460)
	void OnRepCollisionProfileName(); // (Final | Native | Private)

	// Function /Script/EntityActor.EntityActorCollisionComponent.OnNativeComponentHit (Underlying native function: OnNativeComponentHit 0x6a5b298)
	void OnNativeComponentHit(class UPrimitiveComponent*& HitComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/EntityActor.EntityActorCollisionComponent.OnNativeComponentEndOverlap (Underlying native function: OnNativeComponentEndOverlap 0x6a5b15c)
	void OnNativeComponentEndOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Private)

	// Function /Script/EntityActor.EntityActorCollisionComponent.OnNativeComponentBeginOverlap (Underlying native function: OnNativeComponentBeginOverlap 0x6a5af5c)
	void OnNativeComponentBeginOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Private | HasOutParms)

	// Function /Script/EntityActor.EntityActorCollisionComponent.OnEnabledChanged (Underlying native function: OnEnabledChanged 0x6a5ae5c)
	void OnEnabledChanged(bool& bIsEnabled); // (Final | Native | Private)
};

