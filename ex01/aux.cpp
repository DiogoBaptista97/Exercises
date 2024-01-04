	// Crie uma lista de inteiros com pelo menos 10 elementos gerados aleatoriamente.
	srand(time(0));
	std::vector<int> lista(10);

	for (int i = 0; i < 10; i++) {
		lista.push_back(rand() % 100);
	}
	// Remova os valores duplicados se existirem
	std::sort(lista.begin(), lista.end());
	lista.erase(std::unique(lista.begin(), lista.end()), lista.end());

	// Encontrar os valores máximo e mínimo da lista
	int max = *std::max_element(lista.begin(), lista.end());
	int min = *std::min_element(lista.begin(), lista.end());

	// Calcule e exiba a soma de todos os elementos da lista.
	int soma = std::accumulate(lista.begin(), lista.end(), 0);

	// Filtre apenas os números pares da lista.
	std::vector<int> pares;
	std::copy_if(lista.begin(), lista.end(), std::back_inserter(pares), [](int num) { return num % 2 == 0; });

	// Eleve ao quadrado cada elemento da lista e atualize a lista com os valores quadrados.
	std::transform(lista.begin(), lista.end(), lista.begin(), [](int num) { return num * num; });

	// Ordene a lista em ordem crescente
	std::sort(lista.begin(), lista.end());

	// Exiba os resultados
	std::cout << "Lista original: ";
	for (int num : lista) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	std::cout << "Valor máximo: " << max << std::endl;
	std::cout << "Valor mínimo: " << min << std::endl;
	std::cout << "Soma: " << soma << std::endl;

	std::cout << "Lista de números pares: ";
	for (int num : pares) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	std::cout << "Lista com valores ao quadrado: ";
	for (int num : lista) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	return 0;
}