/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * UtilVersionApi.h
 *
 * 
 */

#ifndef UtilVersionApi_H_
#define UtilVersionApi_H_


#include "ApiClient.h"

#include "Result.h"
#include "Version.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  UtilVersionApi
{
public:
    UtilVersionApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~UtilVersionApi();
    /// <summary>
    /// Get current version info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    
    pplx::task<std::shared_ptr<Version>> getVersion();

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* UtilVersionApi_H_ */

