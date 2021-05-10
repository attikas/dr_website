#include "Forum.h"
void Forum::index(const HttpRequestPtr &req,
                  std::function<void(const HttpResponsePtr &)> &&callback) const
{
    auto para = req->getParameters();
    HttpViewData data;
    data.insert("lang", "en-US");
    //data.insert("title", "中华行");
    auto resp = HttpResponse::newHttpViewResponse("forum.csp", data);
    callback(resp);
}
