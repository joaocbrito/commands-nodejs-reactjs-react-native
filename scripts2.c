// criar o arquivo package.json para iniciar o projeto
yarn init -y

// para criar o servidor
yarn add express
yarn add @types/express -D
yarn add express-async-erros --save

// instalar o typescript
yarn add typescript -D

// instalar o transpilador que vai converter o TS em JS e auto-restart ao salvar o código
yarn add ts-node-dev -D

// para criar o arquivo tsconfig.json onde será feito as configurações >> *copiar arquivo já configurado
yarn tsc --init

// colar em package.json
"scripts": {
    "build": "tsc",
    "dev:server": "ts-node-dev --inspect --transpile-only --ignore-watch node_modules src/server.ts",
    "start": "ts-node src/index.ts",
    "typeorm": "ts-node-dev ./node_modules/typeorm/cli.js"
  },

// startar o servidor
yarn dev:server // precisar configurar o script em package.json >> yarn ts-node-dev --inspect --transpile-only --ignore-watch node_modules src/server.ts


*** TYPE ORM *** {
    // usar banco typeorm com postgres
    yarn add typeorm pg

    // criar um arquivo de execução
    yarn typeorm migration:create -n NomeDoArquivo // Ex: CreateAppointments

    // executar todos arquivos criados
    yarn typeorm migration:run

    // exebir oque ja foi executado
    yarn typeorm migration:show

    // reveter a ultima execução do typeorm
    yarn typeorm migration:revert
}

// gerar id automatico em hexadecimal
yarn add uuid


// usar datas
yarn add date-fns


// usar para criptografar senhas
yarn add bcryptjs


// usar token para autenticação
yarn add jsonwebtoken


// usar para fazer upload de imagem
yarn add multer



*** DOCKER *** {
    ------ https://docs.docker.com/engine/reference/commandline/image_ls/ -------- melhor documentação
    // comandos básicos
    // * o comando ( docker container ) pode ser apenas ( docker )
    docker ps // listar os container em execução
    docker ps -a // listar todo os containers ( executados e parados)
    docker ps --all // listar os containers ( não sei a diferença do de cima, mas lista menos containers)
    docker container rm cc3f2ff51cab // remover container
    docker start cc3f2ff51cab // executar container
    docker stop cc3f2ff51cab // parar container
    -d // serve para rodar sem logs
    -rm // server pra deletar o container quando para de executar

    lsof -i tcp:1433 // listar qual programa esta usando esta porta

    //docker pull microsoft/mssql-server-linux // baixar iamgem do sqlserver (opcional)
    docker run -e 'ACCEPT_EULA=Y' -e 'SA_PASSWORD=N0target' -p 1433:1433 -d microsoft/mssql-server-linux // baixar e criar container sqlserver


    docker run --name gostack_postgres -e POSTGRES_PASSWORD=docker -p 5432:5432 -d postgres // criar o container do postgres


    ## criar database
    gostack_gobarber


    docker run --name mongobarber -p 27017:27017 -d -t mongo // diego
    docker volume create --name=mongodata
    docker run --name mongodb -v mongodata:/data/db -d -p 27017:27017 mongo
    docker run -d -p 27017:27017 --name mongobarber mongo // deu certo
    docker run --name redisbarber -p 6379:6379 -d -t redis:alpine
}

// adicionar essa lib para o front conseguir consumir o back
yarn add cors


###### ESLIN #######

"editor.formatOnSave": true,
    "editor.codeActionsOnSave": {
        "source.fixAll.eslint": true
    },
    "eslint.validate": [
        "javascript",
        "typescript"
    ],



// adicionar mongo db
yarn add mongoose

//para trabalhar com data
yarn add date-fns@next

// usar email
yarn add nodemailer

// template para email
yarn add express-handlebars nodemailer-express-handlebars

yarn add bee-queue

// testes de erro
yarn add @sentry/node@5.12.2

//extensao para pegar erros async quando for passar para o sentry
yarn add express-async-errors

// tratativa das mensagens de erro
yarn add youch

// para configurar variaveis de ambiente
yarn add dotenv



################ REACT JS ############

// criar um projeto react js
npx create-react-app nome_do_projeto
npx create-react-app nome_do_projeto --template=typescript // usando typescript


// usar css no jsx
yarn add styled-components
yarn add @types/styled-components


// para usar icones
yarn add react-icons

// para usar estilização
yarn add styled-components
vscode-styled-components >> plugins


// usar icones famosos
yarn add react-icons


// usar esquema de sombra
yarn add polished

// lib  da rocket para facilitar a vida usando formularios
yarn add @unform/core @unform/web

// vaidação de fomulario e erros
yarn add yup

// lib para usar animações
yarn add react-spring

// lib para usar rotas
yarn add react-router-dom
yarn add @types/react-router-dom -D



-----------------------------------------------------------------

yarn add react react-dom

// para usar o babel com react dependencias de dev
yarn add @babel/core @babel/preset-env @babel/preset-react webpack webpack-cli -D

// instalando react com o dom
yarn add react react-dom

yarn add babel-loader -D

// para auto carregar quand salvar
yarn add webpack-dev-server -D

// add no webpack.config
devServer: {
        contentBase: path.resolve(__dirname, 'public'),
    },

// add no package.json
"dev": "webpack-dev-server --mode development"

// add css
yarn add style-loader css-loader -D

// para usa imagens
yarn add file-loader -D

// para nao usar no construtor da classe babel
yarn add @babel/plugin-proposal-class-properties -D

// avisa quado n�o � passado uma func��o como parametro
yarn add prop-types





// para dar reoload na pagina sem sair dela
yarn add react-router-dom





// lib para fazer requi de api
yarn add axios


################ NEXT JS ############

// criar um projeto
yarn create next-app nome_do_projeto
npx create-next- app nome_do_projeto
npx degit https://github.com/rocketseat-content/react-nextjs-typescript-structure nome_do_projeto

// instalar dependencias se for usar typescript
yarn add typescript @types/react @types/react-dom @types/node -D


################ REACT NATIVE ############

https://docs.rocketseat.dev/ambiente-react-native/android/windows#chocolatey

// apenas uma vez para instalar na maquina
yarn add react-native-cli

// criar projeto
npx react-native init AwesomeProject

// configurar o android no wifi
https://blog.getty.io/debugando-react-native-no-android-via-wi-fi-cedce242c375

// iniciar projeto
react-native run-android

// startar
react-native start
react-native start --reset-cache

// fazer as config de eslint
    "eslint": "^6.5.1",
    "@react-native-community/eslint-config": "^1.1.0",
    "@typescript-eslint/eslint-plugin": "^2.27.0",
    "@typescript-eslint/parser": "^2.27.0"

// debugador de testes >> reactrotron
yarn add reactotron-react-native

// configurar porta do reactotron
usar na pasta do sdk-platforms-tools
adb reverse tcp:9090 tcp:9090
{host : hostname}

// biblioteca para navega��o
yarn add @react-navigation/stack

yarn add @react-navigation/native

yarn add react-native-reanimated react-native-gesture-handler react-native-screens react-native-safe-area-context @react-native-community/masked-view

// depois de dar pau instalei isso
yarn add @react-navigation/core@next @react-navigation/native@next

// serve para ficar javascript com css
yarn add styled-components

// serve para adicionar imagens -
https://github.com/oblador/react-native-vector-icons#ios
yarn add react-native-vector-icons


yarn add axios

// salvar os dados no dispositivo
yarn add @react-native-community/async-storage

// para fazer as valida��es
yarn add prop-types

##########  REDUX  #############

// para fazer navega��o
yarn add react-router-dom

// para escurecer as cores
yarn add polished

// api fake para testes
yarn global add json-server

// para startar o servidor fake, -w para restartar quando for alterado o arquivo
json-server server.json -p 3333 -w

// deixar com delay para testes
json-server server.json -p 3333 -d 2000

// usando o redux
yarn add redux react-redux

// usando reactotron
yarn add reactotron-react-js reactotron-redux

// para usar estados do redux
yarn add immer

// redux
yarn add redux-saga

// reactotron
yarn add reactotron-redux-saga

// biblioteca para mensagens de erro e avisos
yarn add react-toastify

// controlar a parte das rotas
yarn add history

*** HOOKS ***

// plugin para eslint e hook
yarn add eslint-plugin-react-hooks -

*** GO BARBER FRONT END ***

yarn add react-router-dom

yarn add history

yarn add reactotron-react-js

yarn add prop-types

yarn add styled-components

// fazer a configura��o nas rotas
yarn add customize-cra react-app-rewired -D
yarn add babel-plugin-root-import eslint-import-resolver-babel-plugin-root-import -D

// para adicionaro darken
yarn add polished

// formulario da rocketseat
yarn add @rocketseat/unform

// valida��es de formulario
yarn add yup

// utilizando redux
yarn add redux redux-saga react-redux reactotron-redux reactotron-redux-saga immer

// para usar api
yarn add axios

// para manter o usuario logado
yarn add redux-persist

// para informar erros
yarn add react-toastify

// para usar icones
yarn add react-icons

// scroll nas listar
yarn add react-perfect-scrollbar

para usar datas
// yarn add date-fns@next

// para trabalahr com datas timezone
yarn add date-fns-tz


*** GO BARBER MOBILE ***

// para usar visual
yarn add react-native-linear-gradient

// para usar link
react-native link react-native-linear-gradient
