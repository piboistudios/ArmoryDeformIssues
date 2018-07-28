package arm;
import iron.math.Vec4;
class TestTrait extends iron.Trait {
	public function new() {
		super();

		// notifyOnInit(function() {
		// });

		notifyOnUpdate(function() {
			var mouse = iron.system.Input.getMouse();

			object.transform.rotate(Vec4.zAxis(), mouse.movementX * 0.003);

		});

		// notifyOnRemove(function() {
		// });
	}
}
