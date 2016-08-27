
cc.FileUtils:getInstance():setPopupNotify(false)
cc.FileUtils:getInstance():addSearchPath("src/")
cc.FileUtils:getInstance():addSearchPath("res/")

-- require "config"
-- require "cocos.init"

local function main()
    -- require("app.MyApp"):create():run()

    local len = 1024--自定义buffer数据长度
	local ba = jt.ByteArray:create(len)
	ba:writeInt(1000)
	ba:writeShort(123)
	ba:writeString("str")
	--写入数组
	for i=1,8 do
		ba:writeLongLong(i)
	end

	print("postion-1:",ba:getPosition())
	--将读写点指向0开始处
	ba:setPosition(0)
	--按顺序读取输出
	print(ba:readInt())
	print(ba:readShort())
	print(ba:readString(3))
	--读取数组
	for i=1,8 do
		print(ba:readLongLong())
	end
	print("postion-2:",ba:getPosition())
	print("check:",ba:getBytesAvailable())--输出0正常，<0访问越界，>0未全部读取
end

local status, msg = xpcall(main, __G__TRACKBACK__)
if not status then
    print(msg)
end
