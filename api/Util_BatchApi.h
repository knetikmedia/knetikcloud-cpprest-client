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
 * Util_BatchApi.h
 *
 * 
 */

#ifndef Util_BatchApi_H_
#define Util_BatchApi_H_


#include "ApiClient.h"

#include "Batch.h"
#include "BatchResult.h"
#include "BatchReturn.h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  Util_BatchApi
{
public:
    Util_BatchApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~Util_BatchApi();
    /// <summary>
    /// Get batch result with token
    /// </summary>
    /// <remarks>
    /// Tokens expire in 24 hours. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="token">token</param>
    pplx::task<std::vector<std::shared_ptr<BatchReturn>>> getBatch(utility::string_t token);
    /// <summary>
    /// Request to run API call given the method, content type, path url, and body of request
    /// </summary>
    /// <remarks>
    /// Should the request take longer than one of the alloted timeout parameters, a token will be returned instead, which can be used on the token endpoint in this service. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="batch">The batch object (optional)</param>
    pplx::task<std::vector<std::shared_ptr<BatchReturn>>> sendBatch(std::shared_ptr<Batch> batch);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* Util_BatchApi_H_ */

