import { ByteArrayInputStream } from "../../util";
import { GameObjects, Scene } from "phaser";


export class Wall extends GameObjects.Rectangle {
    constructor(scene: Scene, x: number, y: number, w: number, h: number, a: number) {
        super(scene, x, y, w, h, 0xffffff)
        this.rotation = a
        this.isFilled = true
    }

    static readFromStream(scene: Scene, stream: ByteArrayInputStream): Wall {
        const x = stream.readFloat()
        const y = stream.readFloat()
        const w = stream.readFloat()
        const h = stream.readFloat()
        const a = stream.readFloat()
        console.debug(x, y, w, h, a)
        return new Wall(scene, x, y, w, h, a)
    }
}