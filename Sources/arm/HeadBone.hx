package arm;

class HeadBone extends iron.Trait {
	public function new() {
		var headBone:iron.object.Object;
		super();

		notifyOnInit(function() {
			var sc = iron.Scene.active;
			headBone = sc.getChild("Head");
			headBone.addChild(object);
		});

		// notifyOnUpdate(function() {
			
		// });

		// notifyOnRemove(function() {
		// });
	}
}
